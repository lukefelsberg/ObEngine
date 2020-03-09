#pragma once

#include <memory>
#include <unordered_map>

#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Texture.hpp>

#include <Triggers/TriggerGroup.hpp>
#include <Types/Registrable.hpp>

namespace obe::Engine
{
    template <class T> using ResourceStore = std::unordered_map<std::string, T>;
    using TexturePair
        = std::pair<std::shared_ptr<sf::Texture>, std::shared_ptr<sf::Texture>>;
    /**
     * \brief Class that manages and caches textures}
     */
    class ResourceManager : public Types::Registrable<ResourceManager>
    {
    private:
        Triggers::TriggerGroupPtr t_resources;
        ResourceStore<std::shared_ptr<sf::Font>> m_fonts;
        ResourceStore<TexturePair> m_textures;

    public:
        bool defaultAntiAliasing;
        ResourceManager();
        std::shared_ptr<sf::Font> getFont(const std::string& path);
        /**
         * \brief Get the texture at the given path.
         *        If it's already in cache it returns the cached version.
         *        Otherwise it loads the texture and caches it.
         * \param path Relative of absolute path to the texture,
         *        it uses the obe::System::Path loading system
         * \param antiAliasing Uses Anti-Aliasing for the texture when first loading it
         * \return A pointer to the texture stored in the cache
         */
        std::shared_ptr<sf::Texture> getTexture(
            const std::string& path, bool antiAliasing);
        std::shared_ptr<sf::Texture> getTexture(const std::string& path);
    };

    class ResourceManagedObject
    {
    protected:
        ResourceManager* m_resources = nullptr;

    public:
        virtual ~ResourceManagedObject() = default;
        virtual void removeResourceManager();
        virtual void attachResourceManager(ResourceManager& resources);
    };
} // namespace obe::Graphics
